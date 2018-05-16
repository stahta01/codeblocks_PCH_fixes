#ifndef BASEEXPORTER_INCLUDED
#define BASEEXPORTER_INCLUDED

#include "globals.h" // HighlightLanguage

class EditorColourSet;
class wxMemoryBuffer;
class wxString;

class BaseExporter
{
  public:
    virtual ~BaseExporter() = 0;
    virtual void Export(const wxString &filename, const wxString &title, const wxMemoryBuffer &styled_text, const EditorColourSet *color_set, int lineCount, int tabWidth) = 0;
};

#endif // BASEEXPORTER_INCLUDED
