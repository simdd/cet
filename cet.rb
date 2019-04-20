class Cet < Formula
    desc "cet"
    homepage "https://github.com/simdd/cet"
    url "https://github.com/simdd/cet/releases/download/0.0.2/cet.zip"
    sha256 "234f4b309e311092dafe81fd48782a6f88904242f663fc5c2ab98abc0e721137"

    def install
      bin.install "cet"
   end
  
    test do
      system "cet"
    end
  end
