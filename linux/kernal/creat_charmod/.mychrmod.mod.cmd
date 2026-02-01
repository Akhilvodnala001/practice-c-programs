savedcmd_mychrmod.mod := printf '%s\n'   mychrmod.o | awk '!x[$$0]++ { print("./"$$0) }' > mychrmod.mod
