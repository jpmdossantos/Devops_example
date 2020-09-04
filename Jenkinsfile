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
        sh 'cmake .'
        sh 'ls'
        sh 'make'
      }
    }

    stage('Test') {
      steps {
        echo 'Test'
        sh './Devops_example_tests -r junit > test_results.xml'
	sh 'ls'
      }
    }

  }
    post {
        always {
            junit 'test_results.xml'
        }
    }

}
