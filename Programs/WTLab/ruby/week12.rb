#ruby program to find area of triangle
require 'mathn'
arr = [
   [[-42, 4, 1], [-26, -34, 1], [  2,   8, 1]],
   [[ 45, -44, 1], [  1,  43, 1], [ 42,  48, 1]],
   [[-24,  29, 1], [ 42,  -1, 1], [ 10,  43, 1]],
   [[ 48, -19, 1], [-19,  37, 1], [-15,  36, 1]],
   ]
arr.each do |a|
  puts 0.5 * Matrix[*a].det.abs
end
