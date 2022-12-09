/*
Copyright 2014 VirusTotal S.L. All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef CALC_FILE_HASHES_TASK_H
#define CALC_FILE_HASHES_TASK_H

#include <QObject>
#include <QRunnable>
#include "qvtfile.h"

class CalcFileHashesTask :  public QObject, public QRunnable
{
  Q_OBJECT
  QVtFile *file;
public:
  CalcFileHashesTask(QVtFile  *file);

  void run(void);

signals:
  void LogMsg(int log_level, int err_code, QString Msg);

};

#endif // CALC_FILE_HASHES_TASK_H

