#ifndef __variablegrid_h
#define __variablegrid_h

#include <wx/string.h>
#include <wx/grid.h>
#include <wx/frame.h>

#include "variables.h"
#include "project.h"
#include "case.h"

#include <vector>

class VariableGridData : public wxGridTableBase
{
public:
	VariableGridData(std::vector<Case *> &cases, wxArrayString &case_names);
	virtual int GetNumberRows();
	virtual int GetNumberCols();
	virtual bool IsEmptyCell(int row, int col);
	virtual wxString GetValue(int row, int col);
	virtual void SetValue(int row, int col, const wxString& value);
	virtual wxString GetColLabelValue(int col);
	virtual wxString GetTypeName(int row, int col);
	bool ShowRow(int row, int comparison_type);
	void Sort(int col, bool ascending);

private:
	int m_rows;
	int m_cols;
	bool m_sorted;
	wxArrayInt m_sorted_index;
	std::vector<Case*> m_cases;
	wxArrayString m_col_hdrs;
	wxArrayString m_var_names;
	wxArrayString m_var_labels;
	std::vector<VarTable*> m_var_table_vec;
	std::vector<VarInfoLookup*> m_var_info_lookup_vec;

};

class VariableGridFrame : public wxFrame, CaseEventListener
{
public:
	VariableGridFrame(wxWindow *parent, std::vector<Case *> &cases, wxArrayString &case_names);
private:
	wxGrid *m_grid;
	VariableGridData *m_griddata;
	std::vector<Case*> m_cases;
	int m_compare_show_type;

	void OnGridColSort(wxGridEvent& event);
	void UpdateGrid();
	void OnCommand(wxCommandEvent &evt);

	// update data when values in case change
	virtual void OnCaseEvent(Case *, CaseEvent &);

	DECLARE_EVENT_TABLE();
};

#endif
