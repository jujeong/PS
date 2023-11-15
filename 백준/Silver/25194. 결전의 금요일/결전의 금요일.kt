var N = 0
var L = 0
var arr: Array<Int> = Array(7) { 0 }
val cache: Array<Boolean> = Array(42) { false }
val pfx: MutableList<Int> = mutableListOf()
var res = false

fun main() {
    input()
    progress()
    output()
}
fun input() {
    N = readln().toInt()
    val temp = readln().split(" ").map { it.toInt() }
    for(i in 0..<N) {
        arr[temp[i] % 7]++
    }
}
fun progress() {
    for(i in 1..6) {
        if (arr[i] > 6) {
            arr[i] = 6
        }
    }
    for(i in 1..6) {
        for(j in 0..<arr[i]) {
            pfx.add(i)
            L++
        }
    }
    dfs(0)
}
fun output() {
    when(res) {
        true -> println("YES")
        false -> println("NO")
    }
}
fun dfs(v: Int) {
    if(v % 7 == 4 || res) {
        res = true
        return
    }
    for(i in 0..<L) {
        if(!cache[i]) {
            cache[i] = true
            dfs(v + pfx[i])
            cache[i] = false
        }
        if(res) {
            return
        }
    }
}