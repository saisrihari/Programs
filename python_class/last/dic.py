import sys
import authenticate as a
		
a.verify(sys.argv[1])
a.verify(sys.argv[2])
a.verify(sys.argv[3])
a.verify(sys.argv[4])
a.insert()