// sub_182782F60
// rva 0x02782f60  size 410  section .text  group text
// window base 0x182782f60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182782F60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi

  MEMORY[0x181EB7F80](a1, a2, a3: v5 + 376614544);
  *(_BYTE *)(v6 + 248) = a5 != 0;
  *(_QWORD *)(v6 + 224) = MEMORY[0x10E44920]();
  *(_QWORD *)(v6 + 216) = sub_18278A0A0(a1: v7, a2: v8, a3: v5 + 376658176);
  *(_DWORD *)(v6 + 16) = 0x3FFFFFFF;
  __faststorefence();
  v9 = *(_DWORD *)(v6 + 320);
  v10 = v9 + 1;
  *(_DWORD *)(v6 + 320) = v10;
  MEMORY[0x181EB8240](a1: v11, a2: v12, a3: v9, a4: v10, a5: (unsigned int)v10);
  MEMORY[0x18207FB60](a1: v13, a2: v14, a3: v5 + 376668448);
  *(_DWORD *)(v6 + 336) |= 2u;
  *(_QWORD *)(v6 + 256) = *(_QWORD *)(v5 + 376178832);
  *(_QWORD *)(v5 + 376178832) = v6;
  ++*(_DWORD *)(v5 + 376195592);
  if ( *(_BYTE *)(v6 + 248) != 0 )
    __sync_fetch_and_add((volatile signed __int32 *)(v5 + 376668604), 0xFFFFFFFF);
  else
    __sync_fetch_and_add((volatile signed __int32 *)(v5 + 376668436), 1u);
  MEMORY[0x181E9A640](a1: v16, a2: v17, a3: v5 + 376613784, a4: v15, a5: v6);
  *(_DWORD *)(v6 + 20) = 3;
  __faststorefence();
  MEMORY[0x18207F840](a1: v18, a2: v19, a3: v5 + 376668480);
  *(_DWORD *)(v6 + 336) &= ~2u;
  MEMORY[0x18207FC60](a1: v20, a2: v21, a3: v5 + 376668448);
  sub_182778980(a1: v22, a2: v23, a3: v6);
  if ( a5 != 0 )
    sub_1827807E0(a1: v24, a2: v25);
  return 0;
}
