class Cet < Formula
    desc "cet"
    homepage "https://github.com/simdd/cet"
    url "https://github.com/simdd/cet/releases/download/0.0.3/cet.zip"
    sha256 "66525b2f057c4247d721b7a20464bc3dca641203cad0da751d15b19953092795"

    def install
      prefix.install "cetrc.sh"
      bin.install "cet"
   end
  
    test do
      system "cet"
    end
  end
