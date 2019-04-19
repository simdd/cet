class GitRelease < Formula
    desc "cet"
    homepage "https://github.com/simdd/cet"
    url "https://github.com/simdd/git-release/releases/download/0.0.1/cet.zip"
    sha256 "7e71407fc5367dc518638712bfb95f6f8550973650198781f35beead91feea17"

    def install
      bin.install "cet"
   end
  
    test do
      system "cet"
    end
  end