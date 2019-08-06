
"use strict";

let Gpgsa = require('./Gpgsa.js');
let Gprmc = require('./Gprmc.js');
let Gpgsv = require('./Gpgsv.js');
let GpgsvSatellite = require('./GpgsvSatellite.js');
let Sentence = require('./Sentence.js');
let Gpgga = require('./Gpgga.js');

module.exports = {
  Gpgsa: Gpgsa,
  Gprmc: Gprmc,
  Gpgsv: Gpgsv,
  GpgsvSatellite: GpgsvSatellite,
  Sentence: Sentence,
  Gpgga: Gpgga,
};
