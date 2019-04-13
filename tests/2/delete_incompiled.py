#!/bin/python3

import os
import subprocess

c_files = os.listdir(".")
o_files = os.listdir("./c/")

for c in c_files:
    have_been_compiled = False
    for o in o_files:
        if c[:-2] == o[:-4]:
            have_been_compiled = True

    if not have_been_compiled:
        if not os.path.isdir(c) and c != "rename.sh" and c != "compile.sh" and c != "delete_incompiled.py":
            subprocess.call("rm " + c, shell=True)
