class Cet < Formula
    desc "cet"
    homepage "https://github.com/simdd/cet"
    url "https://github.com/simdd/cet/releases/download/0.0.2/cet.zip"
    sha256 "37168ee90e8f66884f78f9f559b8446871531558187577b86f252b68f1f64e24"

    def install
      bin.install "cet"
   end
  
    test do
      system "cet"
    end
  end
