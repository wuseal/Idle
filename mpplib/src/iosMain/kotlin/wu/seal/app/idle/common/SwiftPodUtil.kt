package wu.seal.app.idle.common

import cocoapods.CryptoSwift.SwiftWrapper
class SwiftPodUtil {

    fun doAction() {
        println(SwiftWrapper().contractWithA("a", "b == c"))
        println(SwiftWrapper().contractAndMd5WithA("a", "b == c"))
        val encryptedText = SwiftWrapper().aesWithClearText("Seal")
        println("encrypted text is $encryptedText")
        val decryptText = SwiftWrapper().deAesWithEncryptedText(encryptedText)
        println("decrypted text is $decryptText")
    }
}