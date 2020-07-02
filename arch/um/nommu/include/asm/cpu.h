/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __UM_NOMMU_CPU_H
#define __UM_NOMMU_CPU_H

int lkl_cpu_get(void);
void lkl_cpu_put(void);
int lkl_cpu_try_run_irq(int irq);
int lkl_cpu_init(void);
void lkl_cpu_wait_shutdown(void);
void lkl_cpu_change_owner(lkl_thread_t owner);
void lkl_cpu_set_irqs_pending(void);

void nommu_irq_exit(void);
int nommu_irq_enter(int sig);

#endif
