#ifndef WXDATETIMEPICKERCTRL_H
#define WXDATETIMEPICKERCTRL_H

// In wx3.0.2, "wx/defs.h" is needed before wx/version.h under Linux
//    or get [warning: "HAVE_VARIADIC_MACROS" redefined]
#include <wx/defs.h>
#include <wx/version.h>

#if wxCHECK_VERSION(3, 0, 0)
#include <wx/datetimectrl.h>
#else
#include <wx/datectrl.h>

class wxDateTimePickerCtrl : public wxDatePickerCtrlBase
{
    public:
        wxDateTimePickerCtrl( void);

        wxDateTimePickerCtrl(wxWindow *parent,
                         wxWindowID id,
                         wxString Format,
                         const wxDateTime& dt = wxDateTime::Now(),
                         const wxPoint& pos = wxDefaultPosition,
                         const wxSize& size = wxDefaultSize,
                         long style = wxDP_DEFAULT | wxDP_SHOWCENTURY,
                         const wxValidator& validator = wxDefaultValidator,
                         const wxString& name = wxDatePickerCtrlNameStr);

        bool Create(wxWindow *parent,
                         wxWindowID id,
                         const wxDateTime& dt = wxDefaultDateTime,
                         const wxPoint& pos = wxDefaultPosition,
                         const wxSize& size = wxDefaultSize,
                         long style = wxDP_DEFAULT | wxDP_SHOWCENTURY,
                         const wxValidator& validator = wxDefaultValidator,
                         const wxString& name = wxDatePickerCtrlNameStr);

        virtual void SetValue( const wxDateTime& dt);
        virtual wxDateTime GetValue( void) const;

        virtual void SetRange( const wxDateTime& dt1, const wxDateTime& dt2);
        virtual bool GetRange( wxDateTime* dt1, wxDateTime* dt2) const;

        virtual WXDWORD MSWGetStyle( long style, WXDWORD* exstyle) const;

        virtual bool MSWOnNotify( int idCtrl, WXLPARAM lParam, WXLPARAM* result);

    protected:

        virtual wxSize DoGetBestSize( void) const;

        wxDateTime m_date;
        wxString   m_Format;
};

#endif // wxCHECK_VERSION(3, 0, 0)
#endif // WXTIMEPICKERCTRL_H
