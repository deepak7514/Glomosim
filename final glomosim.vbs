Set wshShell = CreateObject( "WScript.Shell" )

'----------------ENVIRONMENT SET TO USER-------------
Set wshSystemEnv = wshShell.Environment( "USER" )

' Display the current value
'WScript.Echo "PATH=" & wshSystemEnv( "PATH" )

' Set the environment variable
wshSystemEnv( "PATH" ) = wshSystemEnv( "PATH" )&"C:\glomosim\parsec\bin;C:\Program Files\Java\jdk1.6.0_24\bin;"

'set environment variable for pcc directory
wshSystemEnv( "PCC_DIRECTORY" ) = "C:\glomosim\parsec"

'--------------------------------------------------------------------------------------------

'-----------------CHANGED ENVIRONMENT TO SYSTEM-------------
Set wshSystemEnv = wshShell.Environment( "SYSTEM" )

'setting env variable java_home
WshSystemEnv( "JAVA_HOME" ) = "C:\Program Files\Java\jdk1.6.0_24"


'msgbox("environment variables added successfully !")

Set wshSystemEnv = Nothing
Set wshShell     = Nothing
