# Boost.Test example


| Branch | Travis | report.ci [travis-ci] | Appveyor | report.ci [appveyor] | Circle CI | report.ci [circle-ci] |
|--------|--------|-----------------------|----------|----------------------|-----------|-----------------------|
| develop | [![Build Status](https://travis-ci.com/report-ci/boost-example.svg?branch=develop)](https://travis-ci.com/report-ci/boost-example) | [![Report Status](https://api.report.ci/status/report-ci/boost-example/badge.svg?branch=develop&level=cases&build=travis-ci)](https://api.report.ci/status/report-ci/boost-example?branch=develop&build=travis-ci) | [![Build Status](https://ci.appveyor.com/api/projects/status/6ngx5kwxsanv1ewh/branch/develop)](https://ci.appveyor.com/project/ReportCi/boost-example) | [![Report Status](https://api.report.ci/status/report-ci/boost-example/badge.svg?branch=develop&level=cases&build=appveyor)](https://api.report.ci/status/report-ci/boost-example?branch=develop&build=appveyor) | [![CircleCI](https://circleci.com/gh/report-ci/boost-example/tree/develop.svg?style=svg)](https://circleci.com/gh/report-ci/boost-example/tree/develop) | [![ReportStatus](https://api.report.ci/status/report-ci/boost-example/badge.svg?branch=develop&level=cases&build=circle-ci)](https://api.report.ci/status/report-ci/boost-example?branch=develop&build=circle-ci) |
| master | [![Build Status](https://travis-ci.com/report-ci/boost-example.svg?branch=master)](https://travis-ci.com/report-ci/boost-example) | [![Report Status](https://api.report.ci/status/report-ci/boost-example/badge.svg?branch=master&level=cases&build=travis-ci)](https://api.report.ci/status/report-ci/boost-example?branch=master&build=travis-ci) | [![Build Status](https://ci.appveyor.com/api/projects/status/6ngx5kwxsanv1ewh/branch/master)](https://ci.appveyor.com/project/ReportCi/boost-example) | [![Report Status](https://api.report.ci/status/report-ci/boost-example/badge.svg?branch=master&level=cases&build=appveyor)](https://api.report.ci/status/report-ci/boost-example?branch=master&build=appveyor) | [![CircleCI](https://circleci.com/gh/report-ci/boost-example/tree/master.svg?style=svg)](https://circleci.com/gh/report-ci/boost-example/tree/master) | [![ReportStatus](https://api.report.ci/status/report-ci/boost-example/badge.svg?branch=master&level=cases&build=circle-ci)](https://api.report.ci/status/report-ci/boost-example?branch=master&build=circle-ci) |

This repository demonstrates how to use report.ci with Boost.Test. It can be done by adding one command to travis-ci as shown below.

```yml
after_script:
  - python <(curl -s https://report.ci/upload.py)
```

There's a example PR [here](https://github.com/report-ci/boost-example/pull/1) and use badges in the markdown file like this:

```md
Last build (the last uploaded one, my be different than from the CI)

[![Build Status](https://api.report.ci/status/report-ci/boost-example/badge.svg)](https://api.report.ci/status/report-ci/boost-example)

Branch master

[![Build Status](https://api.report.ci/status/report-ci/boost-example/badge.svg&branch=master)](https://api.report.ci/status/report-ci/boost-example&branch=master)

You can also set the level to suites, the default is cases.

[![Build Status](https://api.report.ci/status/report-ci/boost-example/badge.svg?branch=master&level=suites)](https://api.report.ci/status/report-ci/boost-example?branch=master)

```

