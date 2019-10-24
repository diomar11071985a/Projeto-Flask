if {[catch {package present Tcl 8.6.0}]} { return }
if {($::tcl_platform(platform) eq "unix") && ([info exists ::env(DISPLAY)]
	|| ([info exists ::argv] && ("-display" in $::argv)))} {
<<<<<<< HEAD
    package ifneeded Tk 8.6.9 [list load [file join $dir .. .. bin libtk8.6.dll] Tk]
} else {
    package ifneeded Tk 8.6.9 [list load [file join $dir .. .. bin tk86t.dll] Tk]
=======
    package ifneeded Tk 8.6.6 [list load [file join $dir .. .. bin libtk8.6.dll] Tk]
} else {
    package ifneeded Tk 8.6.6 [list load [file join $dir .. .. bin tk86tg.dll] Tk]
>>>>>>> 73921da00deaf52c46c591e7cf1f6c7e6f6daa65
}
