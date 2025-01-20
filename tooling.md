# Toolings

## Windows

### WSL

* Use Ubuntu via the WSL (Windows Subsystem for Linux), instead of Virtualbox.
  This has the advantage of not needing virtualbox installation, and iso images etc.
  Installation is very simple ([ref docs](https://learn.microsoft.com/en-us/windows/wsl/install))
  * open CMD with _Run as administrator_
  * `wsl --update` (to ensure the latest version of wsl is being used)
  * `wsl --install` (Ubuntu 24.04 is the default at the time of writing, that will get installed)
  * You should now be able to find `Ubuntu` in the windows search.
* [Runs Linux GUI apps with WSL](https://learn.microsoft.com/en-us/windows/wsl/tutorials/gui-apps)
  * For example install the Gnome text editor and see it already appears in windows search bar
    ```bash
    sudo apt install gnome-text-editor -y
    ```
    Similarly also install the ubuntu file manager if you like
    ```bash
    sudo apt install nautilus -y
    ```
### Helpful Apps

* Filesystem size check: [WinDirStat](https://windirstat.net/download.html)

## Ubuntu

* PDF Reader: [Okular](https://okular.kde.org/download/)
* Typing: [Klavaro](https://flathub.org/apps/net.sourceforge.Klavaro)

### PDF document fixing
 * There are some PDF which are not searchable and not selectable text or highlightable.
   Install `ocrmypdf`, and process the pdf.
   ```bash
   sudo apt install ocrmypdf
   ocrmypdf 3rd_syllabus.pdf 3rd_syllabus_fixed_version.pdf
   ```