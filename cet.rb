class Cet < Formula
    desc "cet"
    homepage "https://github.com/simdd/cet"
    url "https://github.com/simdd/cet/releases/download/0.0.3/cet.zip"
    sha256 "90787301e90c235b98f66199429b8dd26c9db4f01231a190baff71a0fa74dae3"

    def install
      bin.install "cet"
   end
  
    test do
      system "cet"
    end
  end
