#ifndef IL_GLOBALS_H
#define IL_GLOBALS_H


#include <logmanager.h>
#include <globals.h>


wxString GetParentDir(const wxString &path);

bool DirIsChildOf(const wxString &path, const wxString &child);

bool WildCardListMatch(wxString list, wxString name, bool strip=false);

bool PromptSaveOpenFile(wxString message, wxFileName path);

inline void LogMessage(const wxString &msg)
{
    Manager::Get()->GetLogManager()->Log(msg);
}

inline void LogErrorMessage(const wxString &msg)
{
    Manager::Get()->GetLogManager()->LogError(msg);
}

inline int MessageBox(wxWindow *parent, const wxString& message, const wxString& caption = wxEmptyString,
                      int style = wxOK, int x = -1, int y = -1)
{
    return cbMessageBox(message, caption, style, parent, x, y);
}

#endif //IL_GLOBALS_H
