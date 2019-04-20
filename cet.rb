class Cet < Formula
    desc "cet"
    homepage "https://github.com/simdd/cet"
    url "https://github.com/simdd/cet/releases/download/0.0.3/cet.zip"
    sha256 "244d28166800831bdef90213fdc9ae5cbad25235cb51193d868c6762b1e20578"

    def install
      bin.install "cet"
   end
  
    test do
      system "cet"
    end
  end
