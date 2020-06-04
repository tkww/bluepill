class Bluepill < Formula
  desc "Testing tool for iOS that runs UI tests using multiple simulators"
  homepage "https://github.com/tkww/bluepill"
  url "https://github.com/tkww/bluepill.git",
    :revision => "f1bc12d3292501529a9d9e41d86d7e381ffbe025"
  head "https://github.com/tkww/bluepill.git"

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