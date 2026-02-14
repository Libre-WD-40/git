# Git GUI - A graphical user interface for Git

Git GUI allows you to use the [Git source control management
tools](https://git-scm.com/) via a GUI. This includes staging, committing,
adding, pushing, etc. It can also be used as a blame viewer, a tree browser,
and a citool (make exactly one commit before exiting and returning to shell).
More details about Git GUI can be found in its manual page by either running
`man git-gui`, or by visiting the [online manual
page](https://git-scm.com/docs/git-gui).

Git GUI was initially written by Shawn O. Pearce, and is distributed with the
standard Git installation.

# Building and installing

You need to have the following dependencies installed before you begin:

- Git
- Tcl
- Tk
- wish
- Gitk (needed for browsing history)
- msgfmt

Most of Git GUI is written in Tcl, so there is no compilation involved. Still,
some things do need to be done (mostly some substitutions), so you do need to
"build" it.

You can build Git GUI using:

```
make
```

And then install it using:

```
make install
```

You probably need to have root/admin permissions to install.
