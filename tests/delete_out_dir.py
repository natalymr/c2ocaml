#!/bin/python3

import os
import subprocess

all_classes = os.listdir(".")

for class_ in all_classes:
	# compile
	if os.path.isdir(class_):
		cur_dir = "./" + class_ + "/"
		out_dir = cur_dir + "c/"

		cmd_delete_dir = "rm -r " + out_dir
		try:
			subprocess.call(cmd_delete_dir, shell=True)
		except:
			print("for {} can not delete dir with o files".format(class_))
