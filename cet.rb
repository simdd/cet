class Cet < Formula
    desc "cet"
    homepage "https://github.com/simdd/cet"
    url "https://github.com/simdd/git-release/releases/download/0.0.1/cet.zip"
    sha256 "8a2fb6cc040ab79c67ee8b3c3fac1314d1851d870c30429d3d39a8be9e20f410"

    def install
      bin.install "cet"
   end
  
    test do
      system "cet"
    end
  end
