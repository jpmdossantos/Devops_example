pipeline {
  agent {
    dockerfile {
      filename 'dockerfile'
      args '-it -v $PWD:/home/root/workspace'
    }

  }
  stages {
    stage('Initialize') {
      steps {
        sh 'cmake /home/root/workspace'
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