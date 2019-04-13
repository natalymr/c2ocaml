#!/bin/python3
#!/bin/python3

import os
import subprocess

all_classes = os.listdir(".")

for class_ in all_classes:
	# delete incompiled files
	if os.path.isdir(class_):
		cur_dir = "./" + class_ + "/"
		out_dir = cur_dir + "c/"

		c_files = os.listdir(cur_dir)
		out_files = os.listdir(out_dir)

		for c in c_files:
			if not os.path.isdir(c):
				have_been_compiled = False
				for o in out_files:
					if c[:-2] == o[:-4]:
						have_been_compiled = True
				
				if not have_been_compiled:
					cmd_delete = "rm " + cur_dir + c
					try:
						subprocess.call(cmd_delete, shell=True)
					except:
						print("for file {} in {} repo can not delete it".format(c, class_))