pipeline {
  agent	any
  stages {
    stage('Initialize') {
      steps {
        sh 'mkdir build'
	sh 'cmake -S . -B build'
	sh 'ls build'
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
