#include <stdint.h>

struct illusionFlowState64 {
  uint64_t a;
  uint64_t b;
  uint64_t c;
  uint64_t d;
  uint64_t e;
  uint64_t f;
};

struct illusionFlowState32 {
  uint32_t a;
  uint32_t b;
  uint32_t c;
  uint32_t d;
  uint32_t e;
  uint32_t f;
};

struct illusionFlowState16 {
  uint16_t a;
  uint16_t b;
  uint16_t c;
  uint16_t d;
  uint16_t e;
  uint16_t f;
};

struct illusionFlowState8 {
  uint8_t a;
  uint8_t b;
  uint8_t c;
  uint8_t d;
  uint8_t e;
  uint8_t f;
};

uint64_t illusionFlow64(struct illusionFlowState64 *s) {
  uint64_t mix = (s->d << 25) | (s->d >> 39);

  s->d = s->c;
  s->c = s->b;
  s->f += s->e;
  s->e += s->b;
  s->b = s->a + 111111111111111111;
  s->a = s->f ^ mix;
  return s->a ^ (s->b >> 1);
}

uint32_t illusionFlow32(struct illusionFlowState32 *s) {
  uint32_t mix = (s->d << 13) | (s->d >> 19);

  s->d = s->c;
  s->c = s->b;
  s->f += s->e;
  s->e += s->b;
  s->b = s->a + 111111111;
  s->a = s->f ^ mix;
  return s->a ^ (s->b >> 1);
}

uint16_t illusionFlow16(struct illusionFlowState16 *s) {
  uint16_t mix = (s->d << 6) | (s->d >> 10);

  s->d = s->c;
  s->c = s->b;
  s->f += s->e;
  s->e += s->b;
  s->b = s->a + 1111;
  s->a = s->f ^ mix;
  return s->a ^ (s->b >> 1);
}

uint8_t illusionFlow8(struct illusionFlowState8 *s) {
  uint8_t mix = (s->d << 3) | (s->d >> 5);

  s->d = s->c;
  s->c = s->b;
  s->f += s->e;
  s->e += s->b;
  s->b = s->a + 111;
  s->a = s->f ^ mix;
  return s->a ^ (s->b >> 1);
}
