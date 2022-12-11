# hash_verifier_py
A CLI program that you pass a supplied hash and the name of the file to hash 

To run this program, you would use the following command:

python hash_verifier.py <file> <hash>

Where <file> is the name of the file to hash and <hash> is the hash value to compare against.

For example, if you had a file named my_file.txt with the hash value 827ccb0eea8a706c4c34a16891f84e7b, you could use the following command to compare the supplied hash with the calculated hash:

python hash_verifier.py my_file.txt 827ccb0eea8a706c4c34a16891f84e7b

This program only supports the MD5 algorithm, but you could easily add support for other algorithms by adding additional if statements to check the algorithm and using the corresponding hashlib method to calculate the hash. For example, to add support for the SHA-1 algorithm, you could add the following code:

# check if the user specified the SHA-1 algorithm
if args.algorithm == "sha1":
# calculate the hash of the file using the SHA-1 algorithm
file_hash = hashlib.sha1(open(args.file, "rb").read()).hexdigest()

You would also need to add an optional argument to the argparse object to specify the algorithm to use, like this:

# add an optional argument for the algorithm to use
parser.add_argument("--algorithm", default="md5", help="the hashing algorithm to use")

This would allow users to specify the algorithm to use when running the program, like this:

python hash_verifier.py --algorithm sha1 <file> <hash>
