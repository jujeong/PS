var N = 0
var M = 0
var phills= mutableListOf<Pair<Int, Int>>()
var symptoms= mutableListOf<MutableList<Int>>()

fun main(args: Array<String>) {
    input()
    progress()
    output()
}
fun input() {
    N = readln().toInt()
    repeat(N) {
        val input = readln()
        phills.add(Pair(input.substringBefore(" ").trim().toInt(), input.substringAfter(" ").trim().toInt()))
    }
    M = readln().toInt()
    repeat(M) {
        val tempList = mutableListOf<Int>()
        val temp = readln().split(" ").map { it.toInt() }
        for(i in 1..temp[0]) {
            tempList.add(temp[i])
        }
        symptoms.add(tempList)
    }
}
fun progress() {
    for(i in symptoms) {
        val temp = mutableListOf<Int>()
        var flag = true
        for(j in i) {
            when (phills.any { it.first == j }) {
                true -> temp.add(phills.first { it.first == j }.second)
                false -> {
                    println("YOU DIED")
                    flag = false
                    break
                }
            }
        }
        if(flag) {
            for(j in temp) {
                print("$j ")
            }
            println()
        }
    }
}
fun output() {

}