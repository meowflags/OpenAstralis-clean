// sub_181E9E9C0
// rva 0x01e9e9c0  size 463  section .text  group text
// window base 0x181e9e9c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E9E9C0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        int a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  __int64 *v14; // rbp
  double v15; // xmm0_8
  double v16; // xmm1_8
  __int64 v17; // rcx
  double v18; // xmm1_8
  __int64 result; // rax
  __int64 v20; // rdx
  char v21; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v22[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v23; // [rsp+30h] [rbp-18h]
  unsigned __int64 v24; // [rsp+38h] [rbp-10h]
  __int64 v25; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v11 + 8) )
  {
    v24 = a3;
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v21);
    goto LABEL_19;
  }
  v12 = *(unsigned int *)(v10 + 376657112);
  if ( (_DWORD)v12 == 47076562 )
    v13 = (_DWORD *)(v10 + 58177904);
  else
    v13 = (_DWORD *)(v10 + 8 * v12);
  v9 = a3 >> 20;
  if ( v13 != (_DWORD *)v10 && *v13 >> 3 != 4260808 )
  {
    MEMORY[0x18276EAE0]();
LABEL_22:
    if ( __builtin_isnan(v18) )
    {
      v9 = 0;
    }
    else if ( v18 > 0.0 )
    {
      v9 = ~v9;
    }
    goto LABEL_10;
  }
  if ( v13 == (_DWORD *)v10 )
  {
LABEL_19:
    v25 = v9;
    v24 = a3;
    result = MEMORY[0x18276EFE0]();
    goto LABEL_20;
  }
  *(_QWORD *)(v10 + 376178864) = v9 * (int)v13[1];
  v14 = (__int64 *)v22;
  v23 = (__int64 *)v22;
  v15 = *(double *)(v10 + 376178920);
  v16 = 0.0;
  v25 = a3 >> 20;
  v24 = a3;
  if ( v15 == 0.0 )
  {
    MEMORY[0x11703C40](a1, a2, a3, a4: v22, a5: v15, a6: 0.0, a7: a9);
    v14 = v23;
    v15 = (double)*v23;
    v16 = MEMORY[0x11B129D0] / v15;
    *(double *)(v10 + 376178920) = MEMORY[0x11B129D0] / v15;
  }
  MEMORY[0x11703170](a1, a2, a3, a4: v14, a5: v15, a6: v16, a7: a9);
  v17 = *(_QWORD *)(v10 + 376181240);
  v18 = (double)*v23 * *(double *)(v10 + 376178920);
  v9 = (__int64)v18;
  if ( (__int64)v18 == MEMORY[0x11B129C8] )
    goto LABEL_22;
LABEL_10:
  result = 0x431BDE82D7B634DBLL * v9;
  v20 = v9 / 1000000;
  if ( v17 <= v9 / 1000000 )
  {
    *(_QWORD *)(v10 + 376181240) = v20;
    goto LABEL_12;
  }
LABEL_20:
  v20 = v17;
LABEL_12:
  if ( *(_QWORD *)(v10 + 376191424) == 0 )
    *(_QWORD *)(v10 + 376191424) = v20;
  if ( *(int *)(v11 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
