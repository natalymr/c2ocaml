#!/bin/python3

import os
import subprocess

all_classes = os.listdir(".")

for class_ in all_classes:
	# rename
	if os.path.isdir(class_):
		cur_dir = "./" + class_ + "/"
		txt_files = os.listdir(cur_dir)

		for txt in txt_files:
			print(txt)
			if not os.path.isdir(txt):
				old_name = os.path.join(cur_dir, txt)
				new_name = os.path.join(cur_dir, txt[:-4] + ".c")
				try:
					os.rename(old_name, new_name)
				except:
					print("for file {} in {} repo can not rename".format(txt, class_))