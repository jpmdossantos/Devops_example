pipeline {
  agent {
    dockerfile {
      filename 'dockerfile'
      label 'compiler:latest'
      args '-it --rm   -v $PWD:/home/root/workspace compiler:latest'
    }

  }
  stages {
    stage('Initialize') {
      steps {
        echo 'Initialized'
      }
    }

    stage('Build') {
      steps {
        echo 'Build'
      }
    }

    stage('Test') {
      steps {
        echo '?'
      }
    }

  }
}
