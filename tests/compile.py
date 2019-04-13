#!/bin/python3

import os
import subprocess

all_classes = os.listdir(".")

for class_ in all_classes:
	# compile
	if os.path.isdir(class_):
		cur_dir = "./" + class_ + "/"
		c_files = os.listdir(cur_dir)

		# create directory for o files
		cmd_create = "mkdir " + cur_dir + "c"
		subprocess.call(cmd_create, shell=True)

		for c in c_files:
			if not os.path.isdir(c):
				try:
					cmd_compile = "gcc " + cur_dir + c + " -o " + cur_dir + "c/" + c[:-2] + ".out"
					subprocess.call(cmd_compile, shell=True)
				except:
					print("for file {} in {} repo can not compile".format(c, class_))