static var_info _cm_vtab_windpower[] = {
	// VARTYPE	DATATYPE	NAME	LABEL	UNITS	META	GROUP	REQUIRED_IF	CONSTRAINTS	UI_HINTS
{ 	SSC_INPUT, 	SSC_STRING, 	"wind_resource_filename", 	"local wind data file path", 	"", 	"", 	"Wind Resource File", 	"?", 	"LOCAL_FILE", 	""},
{ 	SSC_INPUT, 	SSC_TABLE, 	"wind_resource_data", 	"wind resouce data in memory", 	"", 	"", 	"", 	"?", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"wind_resource_shear", 	"Shear exponent", 	"", 	"", 	"Wind Turbine", 	"*", 	"MIN=0", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"wind_resource_turbulence_coeff", 	"Turbulence coefficient", 	"%", 	"", 	"Wind Farm", 	"*", 	"MIN=0", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"system_capacity", 	"Nameplate capacity", 	"kW", 	"", 	"Wind Farm", 	"*", 	"MIN=0", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"wind_resource_model_choice", 	"Hourly or Weibull model", 	"0/1", 	"", 	"", 	"*", 	"INTEGER", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"weibull_reference_height", 	"Reference height for Weibull wind speed", 	"m", 	"", 	"Wind Speed Weibull Distribution", 	"?=50", 	"MIN=0", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"weibull_k_factor", 	"Weibull K factor for wind resource", 	"", 	"", 	"Wind Speed Weibull Distribution", 	"wind_resource_model_choice=1", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"weibull_wind_speed", 	"Average wind speed for Weibull model", 	"", 	"", 	"Wind Speed Weibull Distribution", 	"wind_resource_model_choice=1", 	"MIN=0", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"wind_turbine_rotor_diameter", 	"Rotor diameter", 	"m", 	"", 	"Wind Turbine", 	"*", 	"POSITIVE", 	""},
{ 	SSCINOUT, 	SSC_ARRAY, 	"wind_turbine_powercurve_windspeeds", 	"Power curve wind speed array", 	"m/s", 	"", 	"Wind Turbine", 	"*", 	"", 	""},
{ 	SSCINOUT, 	SSC_ARRAY, 	"wind_turbine_powercurve_powerout", 	"Power curve turbine output array", 	"kW", 	"", 	"Wind Turbine", 	"*", 	"LENGTH_EQUAL=wind_turbine_powercurve_windspeeds", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"wind_turbine_hub_ht", 	"Hub height", 	"m", 	"", 	"Wind Turbine", 	"*", 	"POSITIVE", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"wind_turbine_max_cp", 	"Max cp", 	"", 	"", 	"Wind Turbine", 	"wind_resource_model_choice=1", 	"MIN=0", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"wind_farm_xCoordinates", 	"Turbine X coordinates", 	"m", 	"", 	"Wind Farm", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"wind_farm_yCoordinates", 	"Turbine Y coordinates", 	"m", 	"", 	"Wind Farm", 	"*", 	"LENGTH_EQUAL=wind_farm_xCoordinates", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"wind_farm_losses_percent", 	"Percentage losses", 	"%", 	"", 	"Wind Farm", 	"*", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"wind_farm_wake_model", 	"Wake Model", 	"0/1/2", 	"", 	"Wind Farm", 	"*", 	"INTEGER", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"en_low_temp_cutoff", 	"Enable Low Temperature Cutoff", 	"0/1", 	"", 	"", 	"?=0", 	"INTEGER", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"low_temp_cutoff", 	"Low Temperature Cutoff", 	"C", 	"", 	"", 	"en_low_temp_cutoff=1", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"en_icing_cutoff", 	"Enable Icing Cutoff", 	"0/1", 	"", 	"", 	"?=0", 	"INTEGER", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"icing_cutoff_temp", 	"Icing Cutoff Temperature", 	"C", 	"", 	"", 	"en_icing_cutoff=1", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"icing_cutoff_rh", 	"Icing Cutoff Relative Humidity", 	"%", 	"", 	"", 	"en_icing_cutoff=1", 	"MIN=0", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"turbine_output_by_windspeed_bin", 	"Turbine output by wind speed bin", 	"kW", 	"", 	"", 	"", 	"LENGTH_EQUAL=wind_turbine_powercurve_windspeeds", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"wind_direction", 	"Wind direction", 	"deg", 	"", 	"", 	"wind_resource_model_choice=0", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"wind_speed", 	"Wind speed", 	"m/s", 	"", 	"", 	"wind_resource_model_choice=0", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"temp", 	"Air temperature", 	"'C", 	"", 	"", 	"wind_resource_model_choice=0", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"pressure", 	"Pressure", 	"atm", 	"", 	"", 	"wind_resource_model_choice=0", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"gen", 	"Total electric power to grid", 	"kWh", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"monthly_energy", 	"Monthly Energy", 	"kWh", 	"", 	"", 	"*", 	"LENGTH=12", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"annual_energy", 	"Annual Energy", 	"kWh", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"capacity_factor", 	"Capacity factor", 	"%", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"kwh_per_kw", 	"First year kWh/kW", 	"kWh/kW", 	"", 	"", 	"*", 	"", 	""},
{ 	SSC_OUTPUT, 	SSC_NUMBER, 	"cutoff_losses", 	"Cutoff losses", 	"%", 	"", 	"", 	"", 	"", 	""},
{ 	SSC_INPUT, 	SSC_NUMBER, 	"adjust:constant", 	"Constant loss adjustment", 	"%", 	"", 	"", 	"*", 	"MAX=100", 	""},
{ 	SSC_INPUT, 	SSC_ARRAY, 	"adjust:hourly", 	"Hourly loss adjustments", 	"%", 	"", 	"", 	"?", 	"LENGTH=8760", 	""},
{ 	SSC_INPUT, 	SSC_MATRIX, 	"adjust:periods", 	"Period-based loss adjustments", 	"%", 	"n x 3 matrix [ start, end, loss ]", 	"", 	"?", 	"COLS=3", 	""},
{ 	SSC_OUTPUT, 	SSC_ARRAY, 	"gen", 	"System power generated", 	"kW", 	"", 	"", 	"*", 	"", 	""},
var_info_invalid};