/* $Id$ -*- C -*-

 * =============================================================================
 *
 * = LIBRARY
 *    pace
 *
 * = FILENAME
 *    pace/posix/mqueue.inl
 *
 * = AUTHOR
 *    Luther Baker
 *
 * ============================================================================= */

PACE_INLINE
int
pace_mq_close (mqd_t mqdes)
{
  return mq_close (mqdes);
}

PACE_INLINE
int
pace_mq_getattr (mqd_t mqdes,
                 struct mq_attr * mqstat)
{
  return mq_getattr (mqdes, mqstat);
}

PACE_INLINE
int
pace_mq_notify (mqd_t mqdes,
                const struct sigevent * notification)
{
  return mq_notify (mqdes, notification);
}

PACE_INLINE
ssize_t
pace_mq_receive (mqd_t mqdes,
                 char * msg_ptr,
                 size_t msg_len,
                 unsigned int * msg_prio)
{
  return mq_receive (mqdes, msg_ptr, msg_len, msg_prio);
}

PACE_INLINE
int
pace_mq_send (mqd_t mqdes,
              const char * msg_ptr,
              size_t msg_len,
              unsigned int msg_prio)
{
  return mq_send (mqdes, msg_ptr, msg_len, msg_prio);
}

PACE_INLINE
int
pace_mq_setattr (mqd_t mqdes,
                 const struct mq_attr * mqstat,
                 struct mq_attr * omqstat)
{
  return mq_setattr (mqdes, mqstat, omqstat);
}

PACE_INLINE
int
pace_mq_unlink (const char * name)
{
  return mq_unlink (name);
}
