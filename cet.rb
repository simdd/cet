class Cet < Formula
    desc "cet"
    homepage "https://github.com/simdd/cet"
    url "https://github.com/simdd/cet/releases/download/0.0.3/cet.zip"
    sha256 "be0e2f2a61f87eec2ce7a481830013daf967f80ed7f1ca0d203b393f90ab4fb9"

    def install
      bin.install "cet"
   end
  
    test do
      system "cet"
    end
  end
