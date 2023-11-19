var N = 0
var S = 0
var arr = mutableListOf<Int>()
var cache: Array<Boolean> = Array(100000) { false }
var res = 0
fun main() {
    input()
    progress()
    output()
}
fun input() {
    N = readln().toInt()
    val temp = readln().trim().split(" ").map { it.toInt() }
    for(i in 0..<N) {
        arr.add(temp[i])
    }
    S = readln().toInt() - 1
}
fun progress() {
    dp(S)
}
fun output() {
    println(res)
}
fun dp(p: Int) {
    if(cache[p]) {
        return
    }
    cache[p] = true
    res++
    if(p + arr[p] < N) {
        dp(p + arr[p])
    }
    if(p - arr[p] >= 0) {
        dp(p - arr[p])
    }
}