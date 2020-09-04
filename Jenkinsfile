pipeline {
  agent {
    dockerfile {
        filename 'dockerfile'
        label 'compile'
        args '-rm -it -v $PWD:/home/root/workspace'
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
