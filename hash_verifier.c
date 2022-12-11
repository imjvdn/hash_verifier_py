import hashlib
import argparse

# create an argument parser to parse the command line arguments
parser = argparse.ArgumentParser()

# add a required argument for the name of the file
parser.add_argument("file", help="the name of the file to hash")

# add a required argument for the hash value to compare against
parser.add_argument("hash", help="the hash value to compare against")

# parse the command line arguments
args = parser.parse_args()

# calculate the hash of the file using the MD5 algorithm
file_hash = hashlib.md5(open(args.file, "rb").read()).hexdigest()

# check if the calculated hash matches the supplied hash
if file_hash == args.hash:
    print("The checksum is valid")
else:
    print("The checksum is not valid")

# print the name of the file, the algorithm used, and the calculated hash
print("Filename: ", args.file)
print("Algorithm: MD5")
print("Supplied hash: ", args.hash)
print("Calculated hash: ", file_hash)
