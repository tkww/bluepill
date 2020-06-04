class Bluepill < Formula
  desc "Testing tool for iOS that runs UI tests using multiple simulators"
  homepage "https://github.com/tkww/bluepill"
  url "https://github.com/tkww/bluepill/releases/download/v5.2.2-1/Bluepill.zip"
  sha256 "c97fc0fb60387dc416a76b323ee28ee42a4a0e0fc69ae01458978a5d13b81929"
  head "https://github.com/tkww/bluepill.git", :branch => "master"

  depends_on :xcode => ["11.2", :build]

  def install
    xcodebuild "-workspace", "Bluepill.xcworkspace",
               "-scheme", "bluepill",
               "-configuration", "Release",
               "SYMROOT=../"
    bin.install "Release/bluepill", "Release/bp"
  end

  test do
    assert_match "Usage:", shell_output("#{bin}/bluepill -h")
    assert_match "Usage:", shell_output("#{bin}/bp -h")
  end
end