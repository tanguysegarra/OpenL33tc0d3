import "math"

func reverse(x int) int {

	neg := 1

	if x < 0 {
		neg = -1
		x *= -1
	}

	var res int

	for x > 0 {
		res *= 10
		res += x % 10
		x /= 10
	}

	if res > math.MaxInt32 {
		return 0
	}

	return res * neg
}