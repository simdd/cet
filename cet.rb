class Cet < Formula
    desc "cet"
    homepage "https://github.com/simdd/cet"
    url "https://github.com/simdd/cet/releases/download/0.0.3/cet.zip"
    sha256 "58be5170a699429e824b6a385a69a80691b151d143c5ba04bc4be1a29a2c1f53"

    def install
      bin.install "cet"
   end
  
    test do
      system "cet"
    end
  end
