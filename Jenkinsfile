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
        sh 'mkdir build'
        sh 'ls .'
        sh 'echo $PWD'
      }
    }

    stage('Build') {
      steps {
        echo 'Build'
        sh 'cmake -S . -B build'
        sh 'ls'
      }
    }

    stage('Test') {
      steps {
        echo '?'
      }
    }

  }
}