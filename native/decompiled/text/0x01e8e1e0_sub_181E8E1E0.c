// sub_181E8E1E0
// rva 0x01e8e1e0  size 502  section .text  group text
// window base 0x181e8e1e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E8E1E0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rcx
  double v12; // xmm0_8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // rcx
  double v17; // xmm0_8
  unsigned __int64 v18; // rsi
  __int64 v19; // rdi
  char v20; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v20);
    goto LABEL_27;
  }
  v9 = *(unsigned int *)(v7 + 376656320);
  if ( (_DWORD)v9 == 47076562 )
    result = v7 + 35651568;
  else
    result = v7 + 8 * v9;
  if ( result != v7 && *(_DWORD *)result >> 3 != 4261917 )
    goto LABEL_28;
  if ( result == v7 )
  {
LABEL_27:
    MEMORY[0x18276EFE0]();
LABEL_28:
    MEMORY[0x18276EAE0]();
    goto LABEL_29;
  }
  if ( *(_BYTE *)(result + 4) == 0 )
    goto LABEL_10;
  if ( *(int *)(v8 + 336) < 1 )
  {
LABEL_29:
    MEMORY[0x1828C1C40](a1, a2, a3: v7 + 368616744);
    goto LABEL_30;
  }
  v11 = *(_QWORD *)(v7 + 376178832);
  if ( v11 != 0 )
  {
    v12 = *(double *)(v11 + 120);
    v6 = *(_QWORD *)(v7 + 376178848);
    v13 = (__int64)v12;
    if ( (__int64)v12 == MEMORY[0x11B12938] )
      goto LABEL_31;
    while ( v6 == 0 )
    {
LABEL_30:
      v12 = MEMORY[0x18276E7E0]();
LABEL_31:
      if ( __builtin_isnan(v12) )
      {
        v13 = 0;
      }
      else if ( v12 > 0.0 )
      {
        v13 = ~v13;
      }
    }
    v14 = v13 / v6;
    v15 = *(_QWORD *)(v7 + 376656344);
    if ( v15 > v14 )
      JUMPOUT(0x303D182B2LL);
    if ( v14 > 0x7F7C0 )
      JUMPOUT(0x303D182C2LL);
    *(_QWORD *)(v11 + 184) = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    result = *(_QWORD *)(v11 + 256);
    v16 = result;
    while ( v16 != 0 )
    {
      v17 = *(double *)(v16 + 120);
      v18 = (__int64)v17;
      if ( (__int64)v17 == MEMORY[0x11B12938] )
      {
        if ( __builtin_isnan(v17) )
        {
          v18 = 0;
        }
        else if ( v17 > 0.0 )
        {
          v18 = ~v18;
        }
      }
      if ( v15 > v18 / v6 )
        JUMPOUT(0x303D18319LL);
      if ( v18 / v6 > 0x7F7C0 )
        JUMPOUT(0x303D18329LL);
      result = v18 / v6;
      *(_QWORD *)(v16 + 184) = (v18 / v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(int *)(v8 + 16) <= 0 )
      {
        result = MEMORY[0x18277F280](a1: *(_QWORD *)(v16 + 256));
        v16 = v19;
      }
      else
      {
        v16 = *(_QWORD *)(v16 + 256);
      }
    }
  }
LABEL_10:
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
