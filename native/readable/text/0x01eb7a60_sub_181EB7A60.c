// sub_1EB7A60
// rva 0x01eb7a60  size 405  section .text  group text
// window base 0x181eb7a60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB7A60()
{
  __int64 v0; // r14
  __int64 v1; // r15
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi

  sub_1EB7860();
  if ( *(_QWORD *)(v0 + 376612208) == 1 )
  {
    sub_2783AE0(a1: v3, a2: v4, a3: *(_QWORD *)(v0 + 376656976));
    *(_QWORD *)(v0 + 376656976) = 0;
    __faststorefence();
  }
  v5 = __atomic_exchange_n((volatile __int64 *)(v0 + 376658480), 0, __ATOMIC_SEQ_CST);
  if ( v5 != 0 )
    sub_278A140(a1: v3, a2: v4, a3: v0 + 376658176, a4: v2, a5: v5);
  v6 = *(_QWORD *)(v0 + 376178832);
  if ( v6 != v1 )
  {
    sub_28C1C40(a1: v3, a2: v4, a3: v0 + 361300432);
  }
  else if ( *(_QWORD *)(v6 + 256) == 0 )
  {
    sub_1594DA0(a1: v3, a2: v4, a3: v0 + 376658192);
    sub_2778800();
    sub_277A280(a1: v7, a2: v8, a3: v1);
    MEMORY[0x11703f48]/* 0x11703f48 */(a1: v9, a2: v10, a3: *(_QWORD *)(v1 + 216), a4: *(_QWORD *)(v1 + 216));
    *(_QWORD *)(v0 + 376658504) = 0;
    *(_DWORD *)(v0 + 376658512) = 0;
    sub_1E9B880(a1: v11, a2: v12);
    sub_2080600(a1: v13, a2: v14, a3: v0 + 376658208);
    if ( *(_BYTE *)(v0 + 376612484) != 0 )
      sub_15922C0(a1: v15, a2: v16, a3: v0 + 376612472);
    result = sub_1E7F9A0(a1: v15, a2: v16, a3: v0 + 376612536);
    if ( (_DWORD)result == 0 )
    {
      MEMORY[0x117035c0]/* 0x117035c0 */(a1: v18, a2: v19, a3: v1 + 80, a4: v1 + 80);
      MEMORY[0x11704030]/* 0x11704030 */(a1: v20, a2: v21, a3: *(_QWORD *)(v1 + 264), a4: *(_QWORD *)(v1 + 264));
      return 0;
    }
    return result;
  }
  sub_28C1C40(a1: v3, a2: v4, a3: v0 + 361300432);
  return 12;
}
