class TkwwBluepill < Formula
  desc "Testing tool for iOS that runs UI tests using multiple simulators"
  homepage "https://github.com/tkww/bluepill"
  url "https://github.com/tkww/bluepill.git",
    :tag => "v5.2.2-1", :revision => "d6fe56545c4172e9c58c5511aac46ad2857df1f1"
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