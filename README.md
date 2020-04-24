# Klasse 12 Mitschriebe

Dieses Repo ist für Schüler aus meiner Klasse gedacht, damit wir gemeinsam unsere Mitschriebe vergleichen,
kombinieren und bewerten können, aber auch weitere Aufschriebe hinzufügen und das Arbeiten mit Git üben können.

Neue Aufschriebe bitte mit Pull Requests committen! Wer nicht weiß wie das geht, bekommt von mir gerne eine
Einführung.

Wichtig ist, dass bei Unterrichtsmitschrieben das Datum im `YYYY-MM-DD` Format am Anfang steht und Leerzeichen
oder andere Sonderzeichen in Dateinamen vermieden verden sollten.

Jegliche Referenz auf Schule oder andere persönliche Information, die nicht veröffentlicht werden sollte, sollte
mit einem Tildensymbol ersetzt/zensiert oder direkt entfernt werden. (Beispiel: `./Latex/02_2_Uebung_Aufteilen`)

Für normale Mitschriebe wird das [Markdown](https://daringfireball.net/projects/markdown/) (.md) Format verwendet. Empfehlenswert ist der [Visual Studio Code](https://code.visualstudio.com/) Editor mit der
"Markdown All In One" Extension. Dazu ist außerdem noch die "markdownlint" Extension hilfreich um mit dem Stil
konsistent zu bleiben. Anders als auf Github unterstützt der VSCode Markdown Renderer auch Latex Mathematik
(Beispiel: `$f(x) = 2x^2 + \frac{1}{3}$`), es gibt aber eine Chrome Extension, welches Latex Formeln im Browser rendern kann.

In `./.vscode/settings.json` finden sich Einstellungen, die für dieses Projekt immer hilfreich sind.

## Pandoc's Markdown

Nach 2020-04-23 arbeite ich nun mit [Pandoc's Markdown](https://pandoc.org/MANUAL.html#pandocs-markdown),
welches erweiterten Syntax, sowie weitere Optionen für Conversion in alle möglichen Dateiformate besitzt.

### Syntax Additionen

Ein paar coole Beispiele von der [Pandoc Markdown Documentation](https://pandoc.org/MANUAL.html#pandocs-markdown):

> **[Extension](https://pandoc.org/MANUAL.html#line-blocks):** `line_blocks`
>
> A line block is a sequence of lines beginning with a vertical bar (|) followed by a space.
> The division into lines will be preserved in the output, as will any leading spaces; otherwise,
> the lines will be formatted as Markdown. This is useful for verse and addresses:
>
>     | The limerick packs laughs anatomical
>     | In space that is quite economical.
>     |    But the good ones I've seen
>     |    So seldom are clean
>     | And the clean ones so seldom are comical

> **[Extension](https://pandoc.org/MANUAL.html#strikeout):** `strikeout`
>
> To strikeout a section of text with a horizontal line, begin and end it with ~~. Thus, for example,
>
>     This ~~is deleted text.~~

> **[Extension](https://pandoc.org/MANUAL.html#footnotes):** `footnotes`
>
> Pandoc’s Markdown allows footnotes, using the following syntax:
>
>     Here is a footnote reference,[^1] and another.[^longnote]
>
>     [^1]: Here is the footnote.
>     [^longnote]: Here's one with multiple blocks.

## Arbeitsumgebung

- [Pandoc](https://pandoc.org/installing.html)
- [Visual Studio Code](https://code.visualstudio.com/)
- VSCode Extensions
    - `yzhang.markdown-all-in-one` (formatting, keybinds for bold/italic/etc., basic live preview with Ctrl+K V)
    - `davidanson.vscode-markdownlint` (format consistency checker)
    - `kzvi.pandoc-markdown-preview` (pandoc markdown live previewer, Ctrl+Shift+R)
    - `dougfinke.vscode-pandoc` (easy conversion to pdf/docx/html without the console)
    - `streetsidesoftware.code-spell-checker` (self-explanatory)
    - `streetsidesoftware.code-spell-checker-german`
