package sample

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView

actual class Sample {
    actual fun checkMe() = 44
}

actual object Platform {
    actual val name: String = "Android"
}

